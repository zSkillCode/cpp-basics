#pragma once

#include "Account.h"

class AdminAccount : public Account {
public:
    void accessAdminPanel() const;
};
