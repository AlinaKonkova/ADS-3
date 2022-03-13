// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int lg = 0;
  int rg = size - 1;
  int count = 0;
  int check = -1;
  while (lg <= rg) {
    int mid = (lg + rg) / 2;
    if (arr[mid] == value) {
     count++;
      check = mid;
      break;
     }
     if (value < arr[mid])
       rg = mid - 1;
     else
       lg = mid + 1;
  }
  if (check >= 0) {
    for (int st = 0; st < check; st++) {
      if (arr[st] == value)
        count++;
    }
    for (int end = size - 1; end > check; end--) {
      if (arr[end] == value)
        count++;
    }
  }
  if (count > 0)
    return count;
  else
    return 0;
}
