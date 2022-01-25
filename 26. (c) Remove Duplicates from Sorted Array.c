int removeDuplicates(int* nums, int numsSize){
  int newIndex = 0;
  int currentNum;
  for (int i=0; i<numsSize; i++) {
    if (i == 0) {
      currentNum = nums[i];
      newIndex = 1;
      continue;
    }
    if (nums[i] == currentNum) continue;

    nums[newIndex] = nums[i];
    currentNum = nums[i];
    newIndex++;
  }
  return newIndex;
}

// Runtime: 22 ms, faster than 31.69% of C online submissions for Remove Duplicates from Sorted Array.
// Memory Usage: 7.7 MB, less than 39.84% of C online submissions for Remove Duplicates from Sorted Array.
