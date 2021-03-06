#include <stdio.h>
typedef struct {
	int plan, category, grade;
}CourseInfo;

CourseInfo course[90]={
	{ 0,1,2 }, //대학영어1
	{ 0,1,2 }, //대학영어2
	{ 0,1,2 }, //A.E. Reading
	{ 0,1,3 }, //글쓰기와토론
	{ 0,1,1 }, //생활한문
	{ 0,1,3 }, //핵심교양 1영역
	{ 0,1,3 }, //핵심교양 2영역
	{ 0,1,3 }, //핵심교양 4영역
	{ 0,1,3 }, //일반수학1 
	{ 0,1,3 }, //일반수학2
	{ 0,1,3 }, //공업수학1
	{ 0,1,3 }, //공업수학2
	{ 0,1,3 }, //물리학1
	{ 0,1,3 }, //물리학2
	{ 0,1,1 }, //물리학실험1
	{ 0,1,1 }, //물리학실험2
	{ 0,1,3 }, //일반화학
	{ 0,1,1 }, //일반화학실험
	{ 0,1,3 }, //정보사회와컴퓨터
	{ 0,1,3 }, //C언어
	{ 3,1,3 }, //창의적 공학설계
	{ 0,1,2 }, //정역학
	{ 0,1,1 }, //CAD 실습
	{ 0,1,3 }, //재료역학1
	{ 0,1,3 }, //동역학1
	{ 0,1,3 }, //열역학1
	{ 0,1,3 }, //유체역학1
	{ 0,1,3 }, //기계공작법1
	{ 1,1,3 }, //기계요소설계
	{ 0,1,2 }, //기계공학실험A
	{ 0,1,2 }, //기계공학실험B
	{ 0,1,1 }, //생산공정실험
	{ 0,1,3 }, //전산제도
	{ 0,1,3 }, //확률 및 통계
	{ 0,1,3 }, //선형대수
	{ 0,1,3 }, //수치해석
	{ 0,1,3 }, //전기회로및실습 or 재료과학
	{ 3,1,3 }, //기계공학종합설계
	{ 1,2,3 }, //재료역학2 
	{ 1,2,3 }, //기계재료
	{ 1,2,3 }, //기계설계
	{ 0,2,3 }, //기계공작법
	{ 2,2,3 }, //성형공정
	{ 1,2,3 }, //구조역학
	{ 2,2,3 }, //CAD/CAM
	{ 1,2,3 }, //자동제어
	{ 1,2,3 }, //선형시스템
	{ 1,2,3 }, //진동공학
	{ 1,2,3 }, //로봇공학 
	{ 2,2,3 }, //유한요소법
	{ 1,2,3 }, //동역학2
	{ 1,2,3 }, //계측공학
	{ 0,2,3 }, //기구학
	{ 1,2,3 }, //소음공학개론
	{ 0,2,3 }, //초소형기계시스템
	{ 0,2,3 }, //자동차제어시스템
	{ 0,2,3 }, //기계공학특수연구1 (고체.생산)
	{ 0,2,3 }, //기계공학특수연수2 (고체.생산)
	{ 3,2,3 }, //기계공학일반설계1 (고체.생산)
	{ 3,2,3 }, //기계공학일반설계2 (고체.생산)
	{ 0,3,3 }, //열역학2
	{ 0,3,3 }, //유체역학2
	{ 0,3,3 }, //열전달
	{ 1,3,3 }, //연소와공해
	{ 2,3,3 }, //유압공학
	{ 0,3,3 }, //공조및냉동
	{ 0,3,3 }, //에너지변환공학
	{ 2,3,3 }, //유체기계
	{ 2,3,3 }, //전산유체공학 
	{ 1,3,3 }, //자동차공학
	{ 1,3,3 }, //내연기관
	{ 0,3,3 }, //신재생에너지공학
	{ 0,3,3 }, //발전플랜트공학
	{ 0,3,3 }, //과학논문작성법
	{ 0,3,3 }, //기계공학특수연구1 (열.유체)
	{ 0,3,3 }, //기계공학특수연구2 (열.유체)
	{ 3,3,3 }, //기계공학일반설계1 (열.유체)
	{ 3,3,3 }, //기계공학일반설계2 (열.유체)
};

int main(){
	for (int i=0; i<78; i++){
		printf("%d %d %d\n", course[i].plan, course[i].category,
				course[i].grade);
	}
}
