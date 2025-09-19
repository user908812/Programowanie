
using Objects;

PointStruct firstPoint;
firstPoint.x = 5;
firstPoint.y = 10;

Console.WriteLine($"Punkt pierwszy ma: ({firstPoint.x}, {firstPoint.y})");

PointStruct secondPoint = firstPoint;
secondPoint.y = 20;

Console.WriteLine($"Punkt drugi ma: ({secondPoint.x}, {secondPoint.y})");

void ParameterTestStruct_v1(PointStruct point)
{
    Console.WriteLine($"W ParameterTestStruct_v1 punkt ma: ({point.x}, {point.y})");
    point.x = 99;
    Console.WriteLine($"W ParameterTestStruct_v1 punkt ma: ({point.x}, {point.y})");
}

void ParameterTestStruct_v2(ref PointStruct point)
{
    Console.WriteLine($"W ParameterTestStruct_v2 punkt ma: ({point.x}, {point.y})");
    point.x = 99;
    Console.WriteLine($"W ParameterTestStruct_v2 punkt ma: ({point.x}, {point.y})");
}

ParameterTestStruct_v1(firstPoint);
Console.WriteLine($"Punkt pierwszy po ParameterTestStruct_v1 ma: ({firstPoint.x}, {firstPoint.y})");

ParameterTestStruct_v2(ref firstPoint);
Console.WriteLine($"Punkt pierwszy po ParameterTestStruct_v2 ma: ({firstPoint.x}, {firstPoint.y})");

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

PointClass firstPointClass = new PointClass();
firstPointClass.x = 5;
firstPointClass.y = 10;

Console.WriteLine($"Punkt pierwszy ma: ({firstPointClass.x}, {firstPointClass.y})");

PointClass secondPointClass = firstPointClass;
secondPointClass.x = 20;

Console.WriteLine($"firstPointClass ma: ({firstPointClass.x}, {firstPointClass.y})");
Console.WriteLine($"secondPointClass ma: ({secondPointClass.x}, {secondPointClass.y})");

void ParameterTestClass_v1(PointClass pc)
{
    Console.WriteLine($"W ParameterTestClass_v1 punkt ma: ({pc.x}, {pc.y})");
    pc.x = 99;
    Console.WriteLine($"W ParameterTestClass_v1 punkt ma: ({pc.x}, {pc.y})");
}
void ParameterTestClass_v2(PointClass pc)
{
    Console.WriteLine($"W ParameterTestClass_v2 punkt ma: ({pc.x}, {pc.y})");
    pc = new PointClass();
    pc.x = 150;
    Console.WriteLine($"W ParameterTestClass_v2 punkt ma: ({pc.x}, {pc.y})");
}
void ParameterTestClass_v3(ref PointClass pc)
{
    Console.WriteLine($"W ParameterTestClass_v3 punkt ma: ({pc.x}, {pc.y})");
    pc = new PointClass();
    pc.x = 42;
    Console.WriteLine($"W ParameterTestClass_v3 punkt ma: ({pc.x}, {pc.y})");
}

ParameterTestClass_v1(firstPointClass);
Console.WriteLine($"firstPointClass: ({firstPointClass.x}, {firstPointClass.y})");

ParameterTestClass_v2(firstPointClass);
Console.WriteLine($"firstPointClass: ({firstPointClass.x}, {firstPointClass.y})");

ParameterTestClass_v3(ref firstPointClass);
Console.WriteLine($"firstPointClass: ({firstPointClass.x}, {firstPointClass.y})");