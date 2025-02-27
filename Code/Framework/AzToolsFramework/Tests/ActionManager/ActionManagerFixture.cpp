/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <Tests/ActionManager/ActionManagerFixture.h>

#include <AzToolsFramework/ActionManager/Action/ActionManagerInterface.h>
#include <AzToolsFramework/ActionManager/Menu/MenuManagerInterface.h>
#include <AzToolsFramework/Editor/ActionManagerUtils.h>

namespace UnitTest
{
    void ActionManagerFixture::SetUp()
    {
        AllocatorsTestFixture::SetUp();

        m_actionManager = AZStd::make_unique<AzToolsFramework::ActionManager>();
        m_actionManagerInterface = AZ::Interface<AzToolsFramework::ActionManagerInterface>::Get();
        ASSERT_TRUE(m_actionManagerInterface != nullptr);

        m_menuManager = AZStd::make_unique<AzToolsFramework::MenuManager>();
        m_menuManagerInterface = AZ::Interface<AzToolsFramework::MenuManagerInterface>::Get();
        ASSERT_TRUE(m_menuManagerInterface != nullptr);

        m_widget = new QWidget();
    }

    void ActionManagerFixture::TearDown()
    {
        AllocatorsTestFixture::TearDown();
    }

} // namespace UnitTest
