/**
 * @file main.cpp
 * @author ayano
 * @date 1/27/24
 * @brief
*/

#include "KawaiiMQ/kawaiiMQ.h"
#include "httplib.h"
#include "Logger.h"
#include "ClientHelper.h"
constexpr int PORT = 33667;
constexpr char HOST[] = "localhost";

using namespace YasashiiServer;

int main() {

    auto queue = KawaiiMQ::makeQueue("testqueue");
    KawaiiMQ::Topic topic("testtopic");
    httplib::Client client(HOST, PORT);
    client.set_logger(ClientLogger());
    relate(client, topic, queue);

}
