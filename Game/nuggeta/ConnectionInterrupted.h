#ifndef _CONNECTIONINTERRUPTED
#define _CONNECTIONINTERRUPTED
#include "Message.h"
#include <cstring>
#include "ConnectionInterrupted.h"
#include "Utils.h"
#include "NUtils.h"

class ConnectionInterrupted :public  Message {
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
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        ConnectionInterrupted();
    public:
        virtual ~ConnectionInterrupted();
};
#endif // _CONNECTIONINTERRUPTED