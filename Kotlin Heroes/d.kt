fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val n = readLine()!!.toInt()
        val sticks = readLine()!!.split(" ").map { it.toInt() }.sorted()

        var cnt = 0
        for (k in (n - 1) downTo 2) {
            var i = 0
            var j = k - 1
            while (i < j) {
                if (sticks[i] + sticks[j] > sticks[k]) {
                    cnt += (j - i)
                    j--
                } else {
                    i++
                }
            }
        }
        println(cnt)
    }
}
