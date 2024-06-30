
import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    var t = scanner.nextInt()
    while (t-- > 0) {
        val n = scanner.nextInt()
        val nums = IntArray(n)
        val arr = IntArray(n)
        for (i in 0 until n) {
            nums[i] = scanner.nextInt()
        }
        arr.indices.forEach { arr[it] = nums[it] }
        nums.sort()
        val rec = if (nums[0] != nums[1]) nums[0] else nums[n - 1]
        for (i in arr.indices) {
            if (arr[i] == rec) {
                println(i + 1)
                break
            }
        }
    }
}
