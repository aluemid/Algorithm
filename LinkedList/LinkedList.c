//
// Created by Brian Kim on 2021/03/06.
//

#include "LInkedList.h"

// 노드 생성
Node* SLL_CreateNode(ElementType NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;  //node의 head부분에 데이터를 저장한다
    NewNode->NexNode = NULL;  // 다음 노드에 대한 포인터는 NULL로 초기화한다.

    return NewNode;
}
