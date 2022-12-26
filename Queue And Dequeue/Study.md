1. 문제를 풀 때, 시간복잡도에 유의하자. endl, cin, cout는 속도가 느린 함수에 속한다. 
  
  풀 때 
  cin.tie(nullptr), cout.tie(NULL), ios::sync_with_stdio(false)를 이용해 동기화를 끊어주고 endl대신 \n을 이용하는것이 속도면에서 우월하다.
