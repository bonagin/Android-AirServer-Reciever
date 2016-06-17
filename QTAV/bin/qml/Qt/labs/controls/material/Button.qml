/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.6
import Qt.labs.templates 1.0 as T
import Qt.labs.controls.material 1.0
import QtGraphicalEffects 1.0

T.Button {
    id: control

    implicitWidth: Math.max(background ? background.implicitWidth : 0,
                            label ? label.implicitWidth + leftPadding + rightPadding : 0)
    implicitHeight: Math.max(background ? background.implicitHeight : 0,
                             label ? label.implicitHeight + topPadding + bottomPadding : 0)
    baselineOffset: label ? label.y + label.baselineOffset : 0

    padding: 6
    leftPadding: 8
    rightPadding: 8

    //! [label]
    label: Text {
        x: control.leftPadding
        y: control.topPadding
        width: control.availableWidth
        height: control.availableHeight

        text: control.text
        font: control.font
        color: control.highlighted ? control.Material.primaryHighlightedTextColor : control.Material.primaryTextColor
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }
    //! [label]

    //! [background]
    background: Rectangle {
        implicitWidth: 36
        implicitHeight: 36

        radius: 2
        color: !control.enabled ? (control.highlighted ? control.Material.raisedHighlightedButtonDisabledColor : control.Material.raisedButtonDisabledColor) :
            (control.pressed ? (control.highlighted ? control.Material.raisedHighlightedButtonPressColor : control.Material.raisedButtonPressColor) :
            (control.activeFocus ? (control.highlighted ? control.Material.raisedHighlightedButtonHoverColor : control.Material.raisedButtonHoverColor) :
            (control.highlighted ? control.Material.raisedHighlightedButtonColor : control.Material.raisedButtonColor)))

        Behavior on color {
            ColorAnimation {
                duration: 400
            }
        }

        layer.enabled: control.enabled
        layer.effect: DropShadow {
            verticalOffset: 1
            color: control.Material.dropShadowColor
            samples: control.pressed ? 15 : 9
            spread: 0.5

            // TODO: Doesn't work because of QTBUG-49072
            Behavior on radius {
                NumberAnimation { duration: 1000 }
            }
        }
    }
    //! [background]
}
