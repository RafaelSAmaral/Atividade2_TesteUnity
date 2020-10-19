#include "Sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestSort1)
{
  // Teste vai passar
  int v[6] = {3,4,1,2,6,5};
  int v_esperado[6] = {1,2,3,4,5,6};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 6);
}

TEST(Sort, TestSort2)
{
  // Teste vai passar
  int v[6] = {1,2,3,4,5,6};
  int v_esperado[6] = {1,2,3,4,5,6};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 6);
}

TEST(Sort, TestSort3)
{
  // Teste vai passar
  int v[6] = {6,5,4,3,2,1};
  int v_esperado[6] = {1,2,3,4,5,6};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 6);
}

TEST(Sort, TestSort4)
{
  // Comparando nada com nada, vai falhar porque nao tem o porque
  int v[0] = {};
  int v_esperado[0] = {};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 0);
}

TEST(Sort, TestSort5)
{
  // Vai falhar pois vetor esperado e menor que o vetor atual
  int v[5] = {2,3,4,1,5};
  int v_esperado[3] = {1,2,3};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 5);
}

TEST(Sort, TestSort6)
{
  // Vai passar, pois so esta testando os 3 primeiro valores do vetor, e fica igual ao vetor esperado
  int v[5] = {2,3,4,1,5};
  int v_esperado[3] = {1,2,3};
  sort(v, 6);
  TEST_ASSERT_EQUAL_INT_ARRAY(v_esperado, v, 3);
}
