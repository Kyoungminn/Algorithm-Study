# 1. 최대공약수와 최소공배수
# Q. 두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환하는 함수, solution을 완성해 보세요. 
# 배열의 맨 앞에 최대공약수, 그다음 최소공배수를 넣어 반환하면 됩니다. 예를 들어 두 수 3, 12의 최대공약수는 3, 최소공배수는 12이므로 solution(3, 12)는 [3, 12]를 반환해야 합니다.

def solution(n, m):
    for i in range (1,n+1) :
        if n%i == 0 :
            if m%i == 0:
                gcd = i 
    if gcd == 1 :
        lcm = n*m 
    else :
        lcm = gcd * (n//gcd) * (m//gcd)
    
    return (gcd, lcm)

# 2. 짝수와 홀수
# Q. 정수 num이 짝수일 경우 Even을 반환하고 홀수인 경우 Odd를 반환하는 함수, solution을 완성해주세요. 

def solution(num):
    if num % 2 == 0 :
        answer = "Even"
    else : 
        answer = "Odd"
    return answer