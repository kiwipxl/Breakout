#ifndef _UNJOINGAMERESPONSE
#define _UNJOINGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "UnjoinGameStatus.h"
#include "UnjoinGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class UnjoinGameResponse :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        UnjoinGameStatus* _UnjoinGameStatus;
    protected:
        bool _UnjoinGameStatusSet;
    protected:
        const char* _GameId;
    protected:
        bool _GameIdSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        UnjoinGameStatus* getUnjoinGameStatus();
    public:
        void setUnjoinGameStatus(UnjoinGameStatus* value);
    public:
        bool isUnjoinGameStatusSet();
    public:
        void unSetUnjoinGameStatus();
    public:
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        UnjoinGameResponse();
    public:
        virtual ~UnjoinGameResponse();
};
#endif // _UNJOINGAMERESPONSE