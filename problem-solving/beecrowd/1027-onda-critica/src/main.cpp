#include <bits/stdc++.h>

using namespace std;

/* First we will make a 2D map to store
 * the dynamic programming data.
 * The 2 dimensios represent [i][a]
 * and it will return the ammount of points
 * found after those axes.
 */
map<int, map<int, int>> dp;

bool compare_cartesian(array<int, 2>& a, array<int, 2>& b){
  /*
   * We are gonna sort the cartasian array using the axis
   * x as reference.
   */
  return a[0] < b[0];
}

int critical(
    // This is the algorithm responsible for the solution.
    vector<array<int,2>> &cartesian,
    int i,
    int target,
    int previous_x = -1,
    int direction = 0
    )
{
  int x = cartesian[i][0];
  int y = cartesian[i][1];

  if (i == cartesian.size() -1) {
    return (y == target + direction and x != previous_x) ? 1 : 0;
  }

  if (direction == 0) {
    if (not dp[y + 1][i]) dp[y + 1][i] = critical(cartesian, i + 1, y, x,  2) + 1;
    if (not dp[y - 1][i]) dp[y - 1][i] = critical(cartesian, i + 1, y, x, -2) + 1;

    int current_max = max(dp[y + 1][i], dp[y - 1][i]);

    int following_max = critical(cartesian, i + 1, cartesian[i + 1][1]);

    return max(current_max, following_max);
  }

  if (y == target + direction and x != previous_x) {
    // New target, new previous_x, new direction..
    return critical(cartesian, i + 1, y, x, -(direction)) + 1;
  }
  // Same target, same previous_x, same direction..
  return critical(cartesian, i + 1, target, previous_x, direction);
}

int main()
{
  int n;
  vector<int> results;

  while (cin >> n){

    vector<array<int,2>> cartesian;
    int x, y;

    for (int axis=0; axis < n; axis++){
      array<int, 2> axes;
      cin >> axes[0] >> axes[1];
      cartesian.push_back(axes);
    }

    sort(cartesian.begin(), cartesian.end(), compare_cartesian);

    results.push_back(critical(cartesian, 0, cartesian[0][1]));

    dp.clear();
  }

  for (int i : results){
    cout << i << "\n";
  }

  return 0;
}
