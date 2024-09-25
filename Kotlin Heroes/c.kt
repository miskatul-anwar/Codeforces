import kotlin.math.max
import kotlin.math.min

typealias ll = Long
typealias vll = List<ll>

fun asquare() {
    val n = readLine()!!.toLong()
    val v = readLine()!!.split(" ").map { it.toLong() }

    var left: ll = 1
    var right: ll = 1

    for (i in 1 until n) {
        if (v[i.toInt()] != v[i.toInt() - 1]) {
            break
        }
        left++
    }

    for (i in (n - 2) downTo 0) {
        if (v[i.toInt()] != v[i.toInt() + 1]) {
            break
        }
        right++
    }

    val sum =
        if (v[0] == v[n.toInt() - 1]) {
            min(n, left + right)
        } else {
            min(n, max(left, right))
        }

    println(n - sum)
}

fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        asquare()
    }
}
