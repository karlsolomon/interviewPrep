int value = 15;
int lowerBound = 10;
int upperBound = 20;

// Using std::clamp to constrain the value within the range [lowerBound, upperBound]
int clampedValue = std::clamp(value, lowerBound, upperBound);
// Result: clampedValue = 15

// Using std::clamp to constrain a value below the lower bound
int belowLower = 5;
int clampedBelow = std::clamp(belowLower, lowerBound, upperBound);
// Result: clampedBelow = 10

// Using std::clamp to constrain a value above the upper bound
int aboveUpper = 25;
int clampedAbove = std::clamp(aboveUpper, lowerBound, upperBound);
// Result: clampedAbove = 20

// Using std::ranges::clamp to constrain the value within the range [lowerBound, upperBound]
int clampedValueRanges = std::ranges::clamp(value, lowerBound, upperBound);
// Result: clampedValueRanges = 15

// Using std::ranges::clamp to constrain a value below the lower bound
int clampedBelowRanges = std::ranges::clamp(belowLower, lowerBound, upperBound);
// Result: clampedBelowRanges = 10

// Using std::ranges::clamp to constrain a value above the upper bound
int clampedAboveRanges = std::ranges::clamp(aboveUpper, lowerBound, upperBound);
// Result: clampedAboveRanges = 20
