#ifndef _SAVEGAMEREQUEST
#define _SAVEGAMEREQUEST
#include "Message.h"
#include <cstring>
#include "NGame.h"
#include "SaveGameRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SaveGameRequest :public  Message {
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
        NGame* _Game;
    protected:
        bool _GameSet;
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
        NGame* getGame();
    public:
        void setGame(NGame* value);
    public:
        bool isGameSet();
    public:
        void unSetGame();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SaveGameRequest();
    public:
        virtual ~SaveGameRequest();
};
#endif // _SAVEGAMEREQUEST