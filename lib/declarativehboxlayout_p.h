/*
  declarativehboxlayout_p.h

  This file is part of DeclarativeWidgets, library and tools for creating QtWidget UIs with QML.

  Copyright (C) 2012-2017 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Tobias Koenig <tobias.koenig@kdab.com>
  Author: Kevin Krammer <kevin.krammer@kdab.com>

  Licensees holding valid commercial KDAB DeclarativeWidgets licenses may use this file in
  accordance with DeclarativeWidgets Commercial License Agreement provided with the Software.

  Contact info@kdab.com if any conditions of this licensing are not clear to you.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DECLARATIVEHBOXLAYOUT_P_H
#define DECLARATIVEHBOXLAYOUT_P_H

#include "declarativewidgets_export.h"
#include "declarativeboxlayout_p.h"
#include "declarativelayoutextension.h"

#include <QHBoxLayout>
#include <qqml.h>

class DECLARATIVEWIDGETS_EXPORT DeclarativeHBoxLayout : public QHBoxLayout
{
  Q_OBJECT

  public:
    explicit DeclarativeHBoxLayout(QObject *parent = 0);

    static DeclarativeBoxLayoutAttached *qmlAttachedProperties(QObject *parent);
};

QML_DECLARE_TYPEINFO(DeclarativeHBoxLayout, QML_HAS_ATTACHED_PROPERTIES)

class DECLARATIVEWIDGETS_EXPORT DeclarativeHBoxLayoutExtension : public DeclarativeLayoutExtension
{
  Q_OBJECT

  // repeat property declarations, qmlRegisterExtendedType doesn't see the ones from base class
  Q_PROPERTY(QQmlListProperty<QObject> data READ data DESIGNABLE false)
  Q_PROPERTY(DeclarativeLayoutContentsMargins* contentsMargins READ contentsMargins CONSTANT)

  Q_CLASSINFO("DefaultProperty", "data")

  public:
    explicit DeclarativeHBoxLayoutExtension(QObject *parent = 0);
};

#endif
