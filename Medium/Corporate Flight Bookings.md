
**Problem No.:** 1109  
**Problem Name:** Corporate Flight Bookings  
**Problem Link:** [LeetCode 1109 - Corporate Flight Bookings](https://leetcode.com/problems/corporate-flight-bookings/description/)

### Brute Force Method

```java
class Solution {
    public int[] corpFlightBookings(int[][] bookings, int n) {
        int[] answer = new int[n];

        for (int i = 0; i < bookings.length; i++) {
            for (int j = bookings[i][0]; j <= bookings[i][1]; j++) {
                answer[j - 1] += bookings[i][2];
            }
        }

        return answer;
    }
}
```

### Optimized Range Addition (Difference Array)

```java
class Solution {
    public int[] corpFlightBookings(int[][] bookings, int n) {
        int[] answer = new int[n];
        int l, r, seats;

        for (int i = 0; i < bookings.length; i++) {
            l = bookings[i][0] - 1;
            r = bookings[i][1] - 1;
            seats = bookings[i][2];

            answer[l] += seats;

            if (r + 1 < n) {
                answer[r + 1] -= seats;
            }
        }

        for (int i = 1; i < n; i++) {
            answer[i] += answer[i - 1];
        }

        return answer;
    }
}
```
