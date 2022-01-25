# @param {Integer[]} nums
# @return {Integer}
def remove_duplicates(nums)
  index = 0
  new_index = 0
  current = nil

  while index < nums.length
    if current != nums[index]
      nums[new_index] = nums[index]
      new_index = new_index + 1
      current = nums[index]
    end

    index = index + 1
  end

  return new_index
end

# Runtime: 60 ms, faster than 90.35% of Ruby online submissions for Remove Duplicates from Sorted Array.
# Memory Usage: 211 MB, less than 71.85% of Ruby online submissions for Remove Duplicates from Sorted Array.
