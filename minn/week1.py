# 1. 직사각형 별찍기
# Q. 이 문제에는 표준 입력으로 두 개의 정수 n과 m이 주어집니다. 별(*) 문자를 이용해 가로의 길이가 n, 세로의 길이가 m인 직사각형 형태를 출력해보세요.

a, b = map(int, input().strip().split(' '))
for i in range (b) :
    print('*'*a)

# 2. x만큼 간격이 있는 n개의 숫자
# Q. 함수 solution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스트를 리턴해야 합니다. 다음 제한 조건을 보고, 조건을 만족하는 함수, solution을 완성해주세요.

def solution(x, n):
    answer = []
    for i in range (1,n+1):
        answer.append(x*i)
    return answer

# 3. 행렬의 덧셈
# Q. 행렬의 덧셈은 행과 열의 크기가 같은 두 행렬의 같은 행, 같은 열의 값을 서로 더한 결과가 됩니다. 2개의 행렬 arr1과 arr2를 입력받아, 행렬 덧셈의 결과를 반환하는 함수, solution을 완성해주세요.

def solution(arr1,arr2):
    for i in range(len(arr1)) :
        for j in range(len(arr1[0])):
            arr1[i][j] += arr2[i][j] 
    return arr1

# 4. 핸드폰 번호 가리기
# Q. 프로그래머스 모바일은 개인정보 보호를 위해 고지서를 보낼 때 고객들의 전화번호의 일부를 가립니다. 전화번호가 문자열 phone_number로 주어졌을 때, 전화번호의 뒷 4자리를 제외한 나머지 숫자를 전부 *으로 가린 문자열을 리턴하는 함수, solution을 완성해주세요.

def solution(phone_number):
    return "*"*(len(phone_number)-4) + phone_number[-4:]

# 5. 하샤드 수
# Q. 양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 예를 들어 18의 자릿수 합은 1+8=9이고, 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다. 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해주세요.

def solution(x):
    result = 0   
    for i in str(x): 
        result = result + int(i) 
    return x%result == 0 








