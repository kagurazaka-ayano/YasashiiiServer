/**
 * @file SerializationTypes.h
 * @author ayano
 * @date 1/30/24
 * @brief
*/

#include <string>
#include <vector>
#include <queue>
#include "KawaiiMQ/kawaiiMQ.h"
#include "cereal/archives/binary.hpp"

namespace YasashiiServer {
    struct TopicData {
        std::string name;
        template<class Archive>
        void serialize(Archive &archive) {
            archive(name);
        }
    };

    struct ConsumerData {
        std::string name;
        std::vector<TopicData> subscribed;
        template<class Archive>
        void serialize(Archive &archive) {
            archive(name, subscribed);
        }
    };

    struct ProducerData {
        std::string name;
        std::vector<TopicData> subscribed;
        template<class Archive>
        void serialize(Archive &archive) {
            archive(name, subscribed);
        }
    };

    template<typename T>
    struct MessageData {
        T message;
        std::string type;
        template<class Archive>
        void serialize(Archive &archive) {
            archive(message, type);
        }
    };

    struct QueueData {
        std::string name;
        int timeout_ms;
        int safe_timeout_ms;
        template<class Archive>
        void serialize(Archive &archive) {
            archive(name, timeout_ms, safe_timeout_ms);
        }
    };
}
