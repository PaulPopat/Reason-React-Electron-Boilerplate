let component = ReasonReact.statelessComponent("App");

let make = children => {
  ...component,
  render: _self => <div> (ReasonReact.stringToElement("Hello World")) </div>
};