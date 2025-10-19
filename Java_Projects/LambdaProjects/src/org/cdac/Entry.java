package org.cdac;

import java.util.*;
import java.util.function.*;
import java.time.LocalDate;

public class Entry {
    public static void main(String[] args) {

        // 1️⃣ Sort a string array in alphabetical order
        Consumer<String[]> sortAlphabetically = arr -> Arrays.sort(arr, String::compareToIgnoreCase);
        String[] names = {"Zebra", "apple", "Mango", "banana"};
        sortAlphabetically.accept(names);
        System.out.println("Sorted: " + Arrays.toString(names));

        // 2️⃣ Find the largest number in an integer array
        Function<int[], Integer> findMax = arr -> Arrays.stream(arr).max().getAsInt();
        int[] nums = {12, 45, 2, 89, 33};
        System.out.println("Largest: " + findMax.apply(nums));

        // 3️⃣ Find the smallest number in an integer array
        Function<int[], Integer> findMin = arr -> Arrays.stream(arr).min().getAsInt();
        System.out.println("Smallest: " + findMin.apply(nums));

        // 4️⃣ Generate a 3-digit random number
        Supplier<Integer> random3Digit = () -> 100 + new Random().nextInt(900);
        System.out.println("3-Digit Random: " + random3Digit.get());

        // 5️⃣ Reverse an integer array
        Function<int[], int[]> reverseArray = arr -> {
            int[] rev = new int[arr.length];
            for (int i = 0; i < arr.length; i++)
                rev[i] = arr[arr.length - 1 - i];
            return rev;
        };
        System.out.println("Reversed: " + Arrays.toString(reverseArray.apply(nums)));

        // 6️⃣ Print the current date
        Supplier<LocalDate> currentDate = LocalDate::now;
        System.out.println("Current Date: " + currentDate.get());

        // 7️⃣ Check if a number is Prime
        Predicate<Integer> isPrime = n -> {
            if (n <= 1) return false;
            for (int i = 2; i <= Math.sqrt(n); i++)
                if (n % i == 0) return false;
            return true;
        };
        System.out.println("Is 17 prime? " + isPrime.test(17));

        // 8️⃣ Concatenate two strings
        BiFunction<String, String, String> concatStrings = (s1, s2) -> s1 + s2;
        System.out.println("Concatenated: " + concatStrings.apply("Hello", "World"));
    }
}

