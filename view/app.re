let component = ReasonReact.statelessComponent("App");

let make = (children) => {
  ...component,
  render: (self) =>
    <div>(ReasonReact.stringToElement("Hello World"))</div>
};