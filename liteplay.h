#ifndef __LITEPLAY_H__
#define __LITEPLAY_H__

typedef struct liteplayElementFactory {


} liteplayElementFactory;

struct liteplayElementData;

typedef struct liteplayIO {



} liteplayIO;

typedef struct liteplayElement {

   char *pName;

   int   nbInputs;
   int   nbOutputs;

   struct liteplayIO* pIOList;
   
   struct liteplayElementData *pEltData;   

} liteplayElement;

typedef struct liteplayBuffer {
   
   void* pData;
   int   size;

   struct liteplayBuffer* pNextBuffer;

} liteplayBuffer;
       

typedef struct liteplayPipe {

   int inFd;
   int outFd;

   struct liteplayElement* inElement;
   struct liteplayElement* outElement;
   
   struct liteplayBuffer* pBufferList;

} liteplayPipe;

typedef struct liteplayPipeline {
} liteplayPipeline;





#endif /* __LITEPLAY_H__ */
