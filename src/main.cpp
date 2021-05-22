#include <dpp/dpp.h>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <iomanip>
#include <sstream>
#include <dpp/discordevents.h>
#include <dpp/message.h>
#include <templatebot/templatebot.h>
using namespace std;
using json = nlohmann::json;

int main(int argc, char const *argv[])
{   
    char *token[] ={getenv("Token")};
    //cout << *token;
    dpp::cluster bot(*token);
     bot.on_ready([&bot](const dpp::ready_t & event) {
        std::cout << "Logged in as " << bot.me.username << "!\n";
    });
    bot.on_message_create([&bot](const dpp::message_create_t & event) {
        if (event.msg->content == "!ping") {
            bot.message_create(dpp::message(event.msg->channel_id, "Pong!"));
        }
    });
    bot.start(false);
    return 0;
}

