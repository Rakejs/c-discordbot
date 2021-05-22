#pragma once
#include <dpp/dpp.h>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <dpp/discordevents.h>
#include <dpp/message.h>
#include <iostream>
// Place any forward declarations here
using namespace std;
int main()
{
    //char *token[1] = {getenv("Token")};
    dpp::cluster bot("token");
    return 0;
}