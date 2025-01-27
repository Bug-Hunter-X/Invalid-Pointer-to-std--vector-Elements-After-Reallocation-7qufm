std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[0];
for (int i = 0; i < 10; ++i) {
  ptr[i] = 100; 
}
//This code will modify the contents of vec. But if the vector is resized or reallocated after ptr is obtained, ptr will become invalid.
//After the reallocation, the ptr points to a memory location which has been released and may be used by other code. This causes unexpected program behavior, including crashes and data corruption.