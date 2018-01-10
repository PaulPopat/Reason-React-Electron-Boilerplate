type variant =
  | Normal
  | Light
  | Lighter
  | Dark
  | Darker;

type colour =
  | Primary(variant)
  | SecondaryOne(variant)
  | SecondaryTwo(variant)
  | Complement(variant);

let makeVariant = (variant: variant) =>
  switch variant {
  | Normal => ""
  | Light => "light"
  | Lighter => "lighter"
  | Dark => "dark"
  | Darker => "darker"
  };

let makeColour = (colour: colour) =>
  switch colour {
  | Primary(variant) => "primary " ++ (variant |> makeVariant)
  | SecondaryOne(variant) => "secondary-one " ++ (variant |> makeVariant)
  | SecondaryTwo(variant) => "secondary-two " ++ (variant |> makeVariant)
  | Complement(variant) => "complement " ++ (variant |> makeVariant)
  };