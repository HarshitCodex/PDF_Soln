
// 1) Generate all 3 rotations of all boxes. The size of rotation array becomes 3 times the size of the original array. For simplicity, we consider width as always smaller than or equal to depth.

// 2) Sort the above generated 3n boxes in decreasing order of base area.

// 3) After sorting the boxes, the problem is same as LIS with following optimal substructure property.
// MSH(i) = Maximum possible Stack Height with box i at top of stack
// MSH(i) = { Max ( MSH(j) ) + height(i) } where j < i and width(j) > width(i) and depth(j) > depth(i).
// If there is no such j then MSH(i) = height(i)

// 4) To get overall maximum height, we return max(MSH(i)) where 0 < i < n