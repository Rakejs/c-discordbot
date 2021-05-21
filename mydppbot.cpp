#include <dpp/dpp.h>
#include <iostream>
using namespace std;
int main()
{
    char *token[1] = {getenv("Token")};
    dpp::cluster bot(*token);
    return 0;
}