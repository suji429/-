# -
산학 sw프로젝트

팀원 역할 : 

20183974 김수지 : 악기 코딩, 발표자료 준비, 발표
20184462 한연솔 : 악기 코딩, 발표자료 준비, 오류수정 

<프로젝트 소개>

제목 : 나만의 미니 밴드

주제 선정 이유 : 둘다 음악을 좋아해서 음악과 아두이노를 합쳐서 만들수 있는게 어떤게 있을까 라는 생각을 하다가 아두이노를 이용한 악기를 만들자 라는 아이디어가 나와서 이 주제로 프로젝트를 진행 하기로 했습니다.

목표 : 일상생활 속에서 쉽게 구할 수 있는 재료와 아두이노를 이용해 누구나 쉽게 만들고 즐길 수 있는 악기를 만드는 것을 목표로 한 프로젝트 입니다.

일정 
7/9 계획발표
7/12 프로젝트 구현 및 세부사항 회의
7/13 - 7/16 피아노 코딩, 오류수정
7/19 중간발표
7/20 피아노 오류 수정, 드럼 코딩
7/21 드럼 코딩 및 테스트
7/22 최종 보고서 작성 및 발표자료 준비
7/23 최종 발표

개발환경 : Arduino IDE, processing


<종이 피아노>
재료 : 종이, 아두이노 메가, 선, 저항, 피에조, 브레드보드, 호일(터치센서 대용품) 

1) 피에조를 이용한 아두이노 종이피아노
pianno.ino 코드를 아두이노에서 컴파일, 업로드 후 연결한 호일(터치센서 대용) 을 누르면 미리 지정해둔 음이 피에조를 통해 출력 됩니다.

2) processing 을 이용한 아두이노 종이 피아노 -> 이번 프로젝트에서 활용한 방법
 piano.ino 을 아두이노에서 컴파일, 업로드 후 pp.pde ( processing code )을 실행 시켜 사용 해야 합니다.
 실행 시킨후 종이 피아노에 연결된 호일( 터치센서 대용 ) 을 누르면 컴퓨터 스피커를 통해 음이 출력됩니다.
 
 설명 
 
 소리내고 싶은 음의 위치에 있는 호일을 지정값 이상의 수치만큼 누르면 소리가 스피커를 통해 출력된다.
 도,레,미,파,솔,라,시,도 총 8개의 음을 낼 수 있다.
 
<캔 드럼>
재료 :캔, 선, 저항, 아두이노 우노, 브레드보드, 호일 

Drum.ino 를 컴파일 업로드 후 프로세싱 코드인 dp.pde를 실행 시켜서 사용합니다.
실행 시킨 후 4개의 캔에 각각 연결된 호일을 누르면 컴퓨터를 통해 소리가 출력 됩니다.

설명 

소리내고 싶은 음의 위치에 있는 호일 또는 캔을 지정값 이상의 수치만큼 터치를 하면 지정된 소리가 컴퓨터 스피커를 통해 출력된다.


장점 :
 나이 성별 과 상관없이 누구나 주변에서 쉽게 구할 수 있는 재료로 드럼과 피아노를 만들수 있으며 쉽고 재미있게 연주를 할 수 있다는 장점이 있습니다.
 
 단점 :
 저항에 따라 수치를 다르게 조절 해야 한다는 단점이 있습니다.
