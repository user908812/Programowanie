namespace AboutObjectConsoleApp;

internal class Point3D: Point
{
    private int z;

    public Point3D()
    {
        z = 64;
    }

    public Point3D(int q, int w, int e): base(q, w)
    {
        z = e;
    } 

    public new void Show()
    {
        Console.WriteLine($"{x}, {Y}, {z}");
        base.Show(); // Show() z pliku point.cs
    } 
}