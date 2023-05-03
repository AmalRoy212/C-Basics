// wanto wright some codes here

let nums = [2,2,3,1];
function thirdLargest(nums) {
  for (let i = 0; i < nums.length; i++) {
    for (let j = 0; j < nums.length; j++) {
      if (nums[i] < nums[j]) {
        let temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
  if (nums.length > 3) {
    if (nums[nums.length - 3] == nums[nums.length - 2]) {
      for (let k = nums.length - 3; k >= 0; k--) {
        if (nums[k] != nums[k + 1]) {
          return nums[k];
        } else {
          return nums[nums.length - 1];
        }
      }
    } else {
      return nums[nums.length - 3];
    }
  } else {
    return nums[nums.length - 1];
  }
}
console.log(thirdLargest(nums), nums);