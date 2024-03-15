s = input() # 문자열 입력 받기
stack = [] # 스택 초기화
result = "" # 결과 문자열 초기화
tag = False # 태그 여부를 판단하는 변수

for char in s:
    if char == '<': # 태그 시작
        # 스택에 있는 문자열 출력
        while stack:
            result += stack.pop()
        result += '<'
        tag = True
    elif char == '>': # 태그 끝
        result += '>'
        tag = False
    elif tag: # 태그 내부
        result += char
    else: # 태그 밖
        if char == ' ': # 공백
            while stack:
                result += stack.pop()
            result += ' '
        else: # 단어
            stack.append(char)
# 스택에 남아있는 문자열 출력
while stack:
    result += stack.pop()

print(result)
