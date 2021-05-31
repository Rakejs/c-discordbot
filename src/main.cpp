#include <dpp/dpp.h>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
#include <iomanip>
#include <sstream>
#include <dpp/discordevents.h>
#include <dpp/message.h>
#include <string>
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
       
        if (event.msg->content == "!help") {
            dpp::embed e;
            e.set_title(" Discord Bot");
            e.set_color(148225192);
            e.set_description("-------");
            e.add_field("Getting Started","use `!!commands` to view all commands");
            bot.message_create(dpp::message(event.msg->channel_id, e));
        }
        if (event.msg->content == "!stats") {
            dpp::guild* msg_guild = dpp::find_guild(event.msg->guild_id);
            dpp::embed e;
            e.set_title("Server Stats");
            e.set_color(148225192);
            e.set_description("The command views general server stats");
            string memcount = to_string(msg_guild->member_count);
            e.add_field("Memberscount",memcount,true);
            bot.message_create(dpp::message(event.msg->channel_id, e));
        }
    });
    bot.start(false);
    return 0;
}

