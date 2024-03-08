#include <iostream>
#include <fstream>
#include <string>

int error(std::string str)
{
    std::cout << str << std::endl;
    return 1;
}

std::string newFileText(std::ifstream &sourceFile, const std::string &sourceString, const std::string &newString)
{
    size_t      pos;
    std::string text;
    std::string res;

    while (getline(sourceFile, text)) {
        pos = 0;
        while (42) {
            pos = text.find(sourceString, pos);
            if (pos == std::string::npos)
                break;
            text.erase(pos, sourceString.length());
            text.insert(pos, newString);
            pos += newString.length();
        }
        res += text;
    }
    return res;
}

int main(int ac, char **av)
{
    std::ifstream   sourceFile;
    std::ofstream   newFile;
    std::string     modifiedText;

    if (ac != 4)
        return error("Wrong number of arguments");
    if (!av[2][0] || !av[3][0])
        return error("Strings must not be empty");
    if (std::string(av[2]).compare(av[3]) == 0)
        return error("The strings must not be equal");
    sourceFile.open(av[1]);
    if (!sourceFile.is_open())
        return error("Error with open sourceFile");
     newFile.open((std::string(av[1]) + ".replace").c_str());
    if (!newFile.is_open())
    {
        sourceFile.close();
        return error("Error with open newFile");
    }

    modifiedText = newFileText(sourceFile, av[2], av[3]);
    sourceFile.close();
    newFile << modifiedText; 
    newFile.close();
    return 0;
}