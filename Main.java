import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main{
    // Find combinations of two numbers that sum up to the target
    public static int[][] findCombinations(int[] numbers, int target) {
        List<int[]> combinations = new ArrayList<>();

        // Iterate over the numbers array to find pairs that sum up to the target
        for (int i = 0; i < numbers.length - 1; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                if (numbers[i] + numbers[j] == target) {
                    combinations.add(new int[]{numbers[i], numbers[j]});
                }
            }
        }

        // Convert the combinations list to a 2D array and return it
        int[][] result = new int[combinations.size()][2];
        for (int i = 0; i < combinations.size(); i++) {
            result[i] = combinations.get(i);
        }

        return result;
    }
    
    // Merge the combinations into a single array and sort it
    public static int[] mergeAndSort(int[][] combinations) {
        List<Integer> mergedList = new ArrayList<>();
        for (int[] combination : combinations) {
            for (int num : combination) {
                mergedList.add(num);
            }
        }

        // Convert the mergedList to an array, sort it, and return the sorted array
        int[] mergedArray = new int[mergedList.size()];
        for (int i = 0; i < mergedList.size(); i++) {
            mergedArray[i] = mergedList.get(i);
        }

        Arrays.sort(mergedArray);
        return mergedArray;
    }

    // Find combinations of two numbers that sum up to double the target
    public static int[][] findCombinationsDoubleTarget(int[] numbers, int target) {
        int doubleTarget = target * 2;
        List<int[]> combinations = new ArrayList<>();
        Arrays.sort(numbers);

        // Use backtracking to find combinations that sum up to double the target
        backtrack(combinations, new ArrayList<>(), numbers, doubleTarget, 0);

        // Convert the combinations list to a 2D array and return it
        int[][] result = new int[combinations.size()][];
        for (int i = 0; i < combinations.size(); i++) {
            result[i] = combinations.get(i);
        }
        return result;
    }

    // Helper method for finding combinations using backtracking
    private static void backtrack(List<int[]> combinations, List<Integer> tempList, int[] numbers, int remain, int start) {
        if (remain == 0) {
            // Convert tempList to an array and add it to the combinations list
            int[] combination = new int[tempList.size()];
            for (int i = 0; i < tempList.size(); i++) {
                combination[i] = tempList.get(i);
            }
            combinations.add(combination);
        } else if (remain > 0) {
            for (int i = start; i < numbers.length; i++) {
                if (i > start && numbers[i] == numbers[i - 1]) {
                    continue; // Skip duplicates to avoid duplicate combinations
                }
                tempList.add(numbers[i]);
                // Recursively backtrack to find more combinations
                backtrack(combinations, tempList, numbers, remain - numbers[i], i + 1);
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = {1, 3, 2, 2, -4, -6, -2, 8};
        int target = 4;

        // Find combinations of numbers that sum up to the target
        int[][] combinations = findCombinations(nums, target);

        // Merge the combinations into a single array and sort it
        int[] mergedArray = mergeAndSort(combinations);

        // Find combinations of numbers that sum up to double the target
        int[][] doubleTargetCombinations = findCombinationsDoubleTarget(nums, target);

        System.out.println("Combinations for target " + target + ":");
        for (int[] combination : combinations) {
            System.out.println(Arrays.toString(combination));
        }

        System.out.println("Merged and sorted array:");
        System.out.println(Arrays.toString(mergedArray));

        System.out.println("Combinations for double target " + (target * 2) + ":");
        for (int[] combination : doubleTargetCombinations) {
            System.out.println(Arrays.toString(combination));
        }
    }
}
