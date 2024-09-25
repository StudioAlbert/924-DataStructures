// 924-DataStructures-Map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <set>
#include <unordered_map>

int main()
{
    std::map<std::string, std::string> phone_numbers;

    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");
    //phone_numbers.emplace("Benjamin", "06203434341");

    phone_numbers["Benjamin"] = "06203434342";
    phone_numbers.insert(std::pair<std::string, std::string>("Seb", "34343434344"));
    phone_numbers["Bernard"] = "06203434343";

    auto one_number = phone_numbers["Seb"];
    /*std::cout << one_number << std::endl;*/

    for(std::pair<std::string, std::string> phone_num : phone_numbers)
    {
        std::cout << "Key : " << phone_num.first << '\t';
        std::cout << "Value : " << phone_num.second << '\n';
    }

    // SET (unique) ---------------------------------------------------------------
    std::set<std::string> names_set;

    names_set.emplace("Benjamin");
    names_set.emplace("Benjamin");
    names_set.emplace("Seb");
    names_set.insert("Toto");
    names_set.insert("Bernard");


    for(auto name : names_set)
    {
        std::cout << "Name : " << name << '\t';
    }

    // MultiMap --------------------------------------
    std::cout << "Multimap -------------------------------------------------" << '\n';
    std::multimap<std::string, std::string> double_phone_numbers;

    double_phone_numbers.emplace("Dede", "2345565");
    double_phone_numbers.emplace("Seb", "2345566");
    double_phone_numbers.emplace("Dede", "2345567");
    double_phone_numbers.emplace("Zorro", "2345569");
    double_phone_numbers.emplace("Dede", "2345568");
    double_phone_numbers.emplace("Zorro", "2345569");
    double_phone_numbers.emplace("Alpha", "2345560");
    for (std::pair<std::string, std::string> phone_num : double_phone_numbers)
    {
        std::cout << "Key : " << phone_num.first << '\t';
        std::cout << "Value : " << phone_num.second << '\n';
    }


}

