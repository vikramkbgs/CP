fun main() = repeat(readLine() !!.toInt())
{

  val s = readLine() !!;

  val cnt1 = s.count({it == '>'})
                 val cnt2 = s.count({it == '<'})
                                val cnt3 = s.count({it == '='})

                                               if (cnt1 > 0 && cnt2 == 0 && cnt3 >= 0)
                                                   println(">");
  else if (cnt1 == 0 && cnt2 > 0 && cnt3 >= 0)
      println("<");
  else if (cnt1 == 0 && cnt2 == 0 && cnt3 > 0)
      println("=");
  else println("?");
}
