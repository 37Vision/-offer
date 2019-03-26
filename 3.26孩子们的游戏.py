# -*- coding:utf-8 -*-

#python2.7版本
class Solution:
    def LastRemaining_Solution(self, n, m):
        if n == 0:
            return -1
        link = range(n)
        ind = 0
        for loop_i in range(n - 1):
            ind = (ind + m) % len(link)
            ind -= 1
            del link[ind]
			#合理利用-1是最后一个元素
            if ind == -1:  # the last element of link
                ind = 0
        return link[0]
        
        