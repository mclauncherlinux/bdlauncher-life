// Generated by scripts/generate_command_definition.py

#include "land.command.h"

template <> class BDL::CustomCommand::CommandParameterProxy<Exit> {
  Exit value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Exit>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Exit";

  operator Exit() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<AB> {
  AB value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, AB>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "AB";

  operator AB() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<LandQuery> {
  LandQuery value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, LandQuery>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "LandQuery";

  operator LandQuery() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Buy> {
  Buy value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Buy>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Buy";

  operator Buy() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Sell> {
  Sell value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Sell>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Sell";

  operator Sell() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Trust> {
  Trust value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Trust>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Trust";

  operator Trust() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Untrust> {
  Untrust value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Untrust>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Untrust";

  operator Untrust() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Trustgui> {
  Trustgui value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Trustgui>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Trustgui";

  operator Trustgui() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Untrustgui> {
  Untrustgui value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Untrustgui>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Untrustgui";

  operator Untrustgui() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Perm> {
  Perm value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Perm>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Perm";

  operator Perm() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Give> {
  Give value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Give>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Give";

  operator Give() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Forceperm> {
  Forceperm value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Forceperm>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Forceperm";

  operator Forceperm() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Dumpall> {
  Dumpall value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Dumpall>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Dumpall";

  operator Dumpall() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<Fix> {
  Fix value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, Fix>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "Fix";

  operator Fix() const noexcept { return value; }
};

template <> class BDL::CustomCommand::CommandParameterProxy<LandReload> {
  LandReload value;

public:
  static auto fetch_tid() { return type_id<CommandRegistry, LandReload>(); }
  static constexpr auto parser    = &CommandRegistry::fake_parse;
  static constexpr auto type      = CommandParameterDataType::NORMAL;
  static constexpr auto enum_name = "LandReload";

  operator LandReload() const noexcept { return value; }
};

struct LDCommand_0 : Command {
  CommandParameterProxy<Exit> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.exit(cmd);
  }
};

struct LDCommand_1 : Command {
  CommandParameterProxy<AB> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.AB_(cmd);
  }
};

struct LDCommand_2 : Command {
  CommandParameterProxy<LandQuery> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.query(cmd);
  }
};

struct LDCommand_3 : Command {
  CommandParameterProxy<Buy> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.buy(cmd);
  }
};

struct LDCommand_4 : Command {
  CommandParameterProxy<Sell> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.sell(cmd);
  }
};

struct LDCommand_5 : Command {
  CommandParameterProxy<Trust> cmd;
  CommandParameterProxy<std::string> target;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.trust(cmd, target);
  }
};

struct LDCommand_6 : Command {
  CommandParameterProxy<Untrust> cmd;
  CommandParameterProxy<std::string> target;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.untrust(cmd, target);
  }
};

struct LDCommand_7 : Command {
  CommandParameterProxy<Trustgui> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.trustgui(cmd);
  }
};

struct LDCommand_8 : Command {
  CommandParameterProxy<Untrustgui> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.untrustgui(cmd);
  }
};

struct LDCommand_9 : Command {
  CommandParameterProxy<Perm> cmd;
  CommandParameterProxy<int> perm;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.perm(cmd, perm);
  }
};

struct LDCommand_10 : Command {
  CommandParameterProxy<Give> cmd;
  CommandParameterProxy<CommandSelector<Player>> target;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDCommand context{origin, output};
    context.give(cmd, target);
  }
};

struct LDOCommand_0 : Command {
  CommandParameterProxy<Fix> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDOCommand context{origin, output};
    context.fix(cmd);
  }
};

struct LDOCommand_1 : Command {
  CommandParameterProxy<Forceperm> cmd;
  CommandParameterProxy<int> perm;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDOCommand context{origin, output};
    context.forceperm(cmd, perm);
  }
};

struct LDOCommand_2 : Command {
  CommandParameterProxy<Dumpall> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDOCommand context{origin, output};
    context.dumpall(cmd);
  }
};

struct LDOCommand_3 : Command {
  CommandParameterProxy<LandReload> cmd;
  virtual void execute(CommandOrigin const &origin, CommandOutput &output) override {
    LDOCommand context{origin, output};
    context.reload(cmd);
  }
};

void register_commands() {
  auto &instance = CustomCommandRegistry::getInstance();
  {
    auto &item = instance.registerEnum<Exit>();
    item.addValue("exit", Exit::exit);
  }
  {
    auto &item = instance.registerEnum<AB>();
    item.addValue("a", AB::a);
    item.addValue("b", AB::b);
  }
  {
    auto &item = instance.registerEnum<LandQuery>();
    item.addValue("query", LandQuery::query);
  }
  {
    auto &item = instance.registerEnum<Buy>();
    item.addValue("buy", Buy::buy);
  }
  {
    auto &item = instance.registerEnum<Sell>();
    item.addValue("sell", Sell::sell);
  }
  {
    auto &item = instance.registerEnum<Trust>();
    item.addValue("trust", Trust::trust);
  }
  {
    auto &item = instance.registerEnum<Untrust>();
    item.addValue("untrust", Untrust::untrust);
  }
  {
    auto &item = instance.registerEnum<Trustgui>();
    item.addValue("trustgui", Trustgui::trustgui);
  }
  {
    auto &item = instance.registerEnum<Untrustgui>();
    item.addValue("untrustgui", Untrustgui::untrustgui);
  }
  {
    auto &item = instance.registerEnum<Perm>();
    item.addValue("perm", Perm::perm);
  }
  {
    auto &item = instance.registerEnum<Give>();
    item.addValue("give", Give::give);
  }
  {
    auto &item = instance.registerEnum<Forceperm>();
    item.addValue("forceperm", Forceperm::forceperm);
  }
  {
    auto &item = instance.registerEnum<Dumpall>();
    item.addValue("dumpall", Dumpall::dumpall);
  }
  {
    auto &item = instance.registerEnum<Fix>();
    item.addValue("fix", Fix::fix);
  }
  {
    auto &item = instance.registerEnum<LandReload>();
    item.addValue("reload", LandReload::reload);
  }
  {
    auto &cmd = instance.registerCommand<LDCommand>();
    {
      auto &ovl = cmd.registerOverload<LDCommand_0>();
      ovl.addParameter<Exit>("cmd", false, offsetof(LDCommand_0, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_1>();
      ovl.addParameter<AB>("cmd", false, offsetof(LDCommand_1, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_2>();
      ovl.addParameter<LandQuery>("cmd", false, offsetof(LDCommand_2, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_3>();
      ovl.addParameter<Buy>("cmd", false, offsetof(LDCommand_3, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_4>();
      ovl.addParameter<Sell>("cmd", false, offsetof(LDCommand_4, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_5>();
      ovl.addParameter<Trust>("cmd", false, offsetof(LDCommand_5, cmd));
      ovl.addParameter<std::string>("target", false, offsetof(LDCommand_5, target));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_6>();
      ovl.addParameter<Untrust>("cmd", false, offsetof(LDCommand_6, cmd));
      ovl.addParameter<std::string>("target", false, offsetof(LDCommand_6, target));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_7>();
      ovl.addParameter<Trustgui>("cmd", false, offsetof(LDCommand_7, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_8>();
      ovl.addParameter<Untrustgui>("cmd", false, offsetof(LDCommand_8, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_9>();
      ovl.addParameter<Perm>("cmd", false, offsetof(LDCommand_9, cmd));
      ovl.addParameter<int>("perm", false, offsetof(LDCommand_9, perm));
    }
    {
      auto &ovl = cmd.registerOverload<LDCommand_10>();
      ovl.addParameter<Give>("cmd", false, offsetof(LDCommand_10, cmd));
      ovl.addParameter<CommandSelector<Player>>("target", false, offsetof(LDCommand_10, target));
    }
  }
  {
    auto &cmd = instance.registerCommand<LDOCommand>();
    {
      auto &ovl = cmd.registerOverload<LDOCommand_0>();
      ovl.addParameter<Fix>("cmd", false, offsetof(LDOCommand_0, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDOCommand_1>();
      ovl.addParameter<Forceperm>("cmd", false, offsetof(LDOCommand_1, cmd));
      ovl.addParameter<int>("perm", false, offsetof(LDOCommand_1, perm));
    }
    {
      auto &ovl = cmd.registerOverload<LDOCommand_2>();
      ovl.addParameter<Dumpall>("cmd", false, offsetof(LDOCommand_2, cmd));
    }
    {
      auto &ovl = cmd.registerOverload<LDOCommand_3>();
      ovl.addParameter<LandReload>("cmd", false, offsetof(LDOCommand_3, cmd));
    }
  }
}
