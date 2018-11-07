#include <iostream>
#include <string>

int main()
{
    std::cout << "1-1" << std::endl;
    // 1-1
    const std::string hello = "Hello";
    const std::string message_1 = hello + ", world" + "!";
    std::cout << message_1 << std::endl;


    std::cout << "1-2" << std::endl;
    // 1-2
    const std::string exclam = "!";
    // const std::string message_2 = "Hello" + ", world" + exclam;    //no
    // 1-2 test
    const std::string comma = ", ";
    const std::string world = "world";
    const std::string middle = ", world";
    const std::string message_2 = hello + comma + world + exclam;    //okay
    // const std::string message_2 = "Hello" + comma + world + exclam;    //okay
    // const std::string message_2 = "Hello" + comma + "world" + exclam;    //okay
    // const std::string message_2 = hello + ", " + "world" + "!";    //okay
    // const std::string message_2 = "Hello" + ", " + "world" + "!";    //no
    std::cout << message_2 << std::endl;


    std::cout << "1-3" << std::endl;
    // 1-3
    { const std::string s = "a string";
      std::cout << s << std::endl; }

    { const std::string s = "another string";
      std::cout << s << std::endl; }


    std::cout << "1-4" << std::endl;
    // 1-4
    { const std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}


    std::cout << "1-5" << std::endl;
    // 1-5
    /* not work. error: 'x' was not declared in the scope
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl; }
    std::cout << x << std::endl;
    }
    */
    { std::string s = "a string";
    { std::string x = s + ", really";
    std::cout << s << std::endl; 
    std::cout << x << std::endl;
    }}


    std::cout << "1-6" << std::endl;
    // 1-6
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;


    return 0;
}