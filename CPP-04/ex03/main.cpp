#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    {
        std::cout << "____SUBJECT_MAIN____" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        std::cout << std::endl;
    }
    {
	std::cout << "____CONSTRUCTORS____" << std::endl;
	std::cout << std::endl;
	IMateriaSource* magic = new MateriaSource();
	magic->learnMateria(new Ice());
	magic->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;
//_______________________________________________________________________________________
	std::cout << "____CREATE MATERIA____" << std::endl;
	std::cout << std::endl;
	AMateria	*materia;
	AMateria	*materia1;
	AMateria	*materia2;
	AMateria	*materia3;
	AMateria	*materia4;
    AMateria    *cloned_materia;

	materia = magic->createMateria("ice");
	me->equip(materia);
	materia1 = magic->createMateria("cure");
	me->equip(materia1);
	materia = magic->createMateria("fire"); //empty
	me->equip(materia);
	std::cout << std::endl;

//_______________________________________________________________________________________
	std::cout << "____USE ON A CHARACTER____" << std::endl;
	std::cout << std::endl;
	ICharacter* enemy = new Character("enemy");
	me->use(0, *enemy);
	me->use(1, *enemy);
	std::cout << std::endl;
	me->use(2, *enemy); // Use an empty / non existing slot in inventory
	me->use(-4, *enemy);
	me->use(18, *enemy);
	std::cout << std::endl;
//_______________________________________________________________________________________
	std::cout << "____DEEP COPY CHARACTER CREATION____" << std::endl;
	std::cout << std::endl;
	Character	*wizard = new Character("wizard");

    materia = magic->createMateria("earth");
	materia2 = magic->createMateria("cure");    
	materia3 = magic->createMateria("ice");
    cloned_materia = materia3->clone();

    wizard->equip(materia);
    wizard->equip(materia2);
	wizard->equip(cloned_materia);

	Character	*wizard_copy = new Character(*wizard);
	std::cout << std::endl;
//_______________________________________________________________________________________
	std::cout << "____COMPARE DEEP COPY VS SOURCE____" << std::endl;
	std::cout << std::endl;
	wizard->unequip(0);
	materia4 = wizard_copy->getMateriaFromInventory(1);
	wizard_copy->unequip(1);
	delete materia4;
	materia = magic->createMateria("cure");
	wizard_copy->equip(materia);
	materia = magic->createMateria("ice");
	wizard_copy->equip(materia);
	std::cout << std::endl;
	wizard->use(0, *enemy);
	wizard->use(1, *enemy);
	wizard->use(2, *enemy);
	wizard->use(3, *enemy);
	std::cout << std::endl;
	wizard_copy->use(0, *enemy);
	wizard_copy->use(1, *enemy);
	wizard_copy->use(2, *enemy);
	wizard_copy->use(3, *enemy);
	std::cout << std::endl;
//_______________________________________________________________________________________
	std::cout << "____UNEQUIP____" << std::endl;
	std::cout << std::endl;
	me->unequip(-1); // unequip an empty / non existing slot in inventory
	me->unequip(18);
	me->unequip(3);
	std::cout << std::endl;
	me->use(1, *wizard);
	me->unequip(1); // unequip a valid slot in inventory
	me->use(1, *wizard);
	std::cout << std::endl;
//_______________________________________________________________________________________
	delete enemy;
	delete me;
	delete magic;
	delete wizard;
	delete wizard_copy;
	delete materia1;
	delete materia2;
    delete materia3;
    }
}
