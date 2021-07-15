/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qdesigner_formwindowmanager_p.h"
#include "plugindialog_p.h"

#include <QtDesigner/QDesignerFormEditorInterface>

QT_BEGIN_NAMESPACE

using namespace qdesigner_internal;

/*!
    \class QDesignerFormWindowManager

    Extends QDesignerFormWindowManagerInterface with methods to control
    the preview and printing of forms. It provides a facade that simplifies
    the complexity of the more general PreviewConfiguration & PreviewManager
    interfaces.

    \since 4.5
  */


QDesignerFormWindowManager::QDesignerFormWindowManager(QObject *parent)
    : QDesignerFormWindowManagerInterface(parent), m_unused(0)
{
}

QDesignerFormWindowManager::~QDesignerFormWindowManager()
{
}

/*!
    Allows you to intervene and control \QD's form "Preview" action. The
    function returns the original action.

    \since 4.5
  */
QAction *QDesignerFormWindowManager::actionDefaultPreview() const
{
    return 0;
}

/*!
    Allows you to intervene and control \QD's form "Preview in" style action. The
    function returns the original list of actions.

    The method calls PreviewManager::createStyleActionGroup() internally.

    \since 4.5
  */
QActionGroup *QDesignerFormWindowManager::actionGroupPreviewInStyle() const
{
    return 0;
}

/*!
    \fn QPixmap QDesignerFormWindowManager::createPreviewPixmap(QString *errorMessage)

    Creates a pixmap representing the preview of the currently active form.

    The method calls PreviewManager::createPreviewPixmap() internally.

    \since 4.5
  */


/*!
    \fn QPixmap QDesignerFormWindowManager::closeAllPreviews()

    Closes all preview windows generated by actionDefaultPreview, actionGroupPreviewInStyle
    and the corresponding methods in PreviewManager.

    \since 4.5
  */

/*!
    \fn PreviewManager *QDesignerFormWindowManager::previewManager()

    Accesses the previewmanager implementation.

    \since 4.5
    \internal
  */

/*!
    \fn QAction *QDesignerFormWindowManager::actionShowFormWindowSettingsDialog() const;

    Allows you to intervene and control \QD's form "Form Settings" action. The
    function returns the original action.

    \since 4.5
    \internal
  */

QAction *QDesignerFormWindowManager::actionShowFormWindowSettingsDialog() const
{
    return 0;
}

/*!
    \fn void QDesignerFormWindowManager::aboutPlugins()

    Pops up an "About plugins" dialog.

    \since 4.5
    \internal
  */

void QDesignerFormWindowManager::aboutPlugins()
{
    PluginDialog dlg(core(), core()->topLevel());
    dlg.exec();
}

/*!
    \fn
    void QDesignerFormWindowManager::formWindowSettingsChanged(QDesignerFormWindowInterface *fw);

    This signal is emitted when the form settings dialog was shown
    and changes have been made to the form.

    \since 4.5
    \internal
  */


QT_END_NAMESPACE
