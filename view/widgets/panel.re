module Style = {
  let makeClasses = (colour: Colour.colour) =>
    "panel background " ++ (colour |> Colour.makeColour);
};

module Button = {
  let component = ReasonReact.statelessComponent("ButtonPanel");
  let make = (~colour: Colour.colour=Primary(Dark), ~onClick, children) => {
    ...component,
    render: _self => {
      let click = _event => onClick();
      <div className=(Style.makeClasses(colour) ++ " button") onClick=click>
        (children |> ReasonReact.array)
      </div>;
    }
  };
};

module Column = {
  let component = ReasonReact.statelessComponent("Column");
  let make = (~width: int, children) => {
    ...component,
    render: _self =>
      <div
        style=(
          ReactDOMRe.Style.make(
            ~display="inline-block",
            ~width=string_of_int(width) ++ "%",
            ~verticalAlign="middle",
            ()
          )
        )>
        (children |> ReasonReact.array)
      </div>
  };
};

let component = ReasonReact.statelessComponent("Panel");

let make = (~colour: Colour.colour=Primary(Light), children) => {
  ...component,
  render: _self =>
    <div className=(Style.makeClasses(colour))>
      (children |> ReasonReact.array)
    </div>
};