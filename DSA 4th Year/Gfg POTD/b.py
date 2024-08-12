# def f(n, k, A): *B, = range(n+1); g = lambda d: d < len(B) and g(2*d +
#                                                                  1) | g(2*d) | B.pop(d); [g(B.index(x))for x in A]; print(B[1:] or [0])def f(n:Int,k:Int,A:List[Int])={var B:List[Int]=(0 to n).toList;def g(d:Int):Unit={if (d<B.length){g(2*d+1);g(2*d);B=B.patch(d,Nil,1);}};A.foreach(x=> g(B.indexOf(x)));println(if(B.length>1)B.tail else List(0))}



def f(n, k, A):
    *B, = range(n+1)
    g = lambda d: d < len(B) and g(2*d + 1) | g(2*d) | B.pop(d)
    [g(B.index(x))for x in A]
    print(B[1:] or [0])

print(f(7, 1, [1]))