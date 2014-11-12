/****************************************************************************
**
** Copyright (C) 2014 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.io
**
** This file is part of the Qt Charts module.
**
** Licensees holding valid commercial license for Qt may use this file in
** accordance with the Qt License Agreement provided with the Software
** or, alternatively, in accordance with the terms contained in a written
** agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.io
**
****************************************************************************/

#include "drilldownseries.h"

QT_CHARTS_USE_NAMESPACE

DrilldownBarSeries::DrilldownBarSeries(QStringList categories, QObject *parent)
    : QStackedBarSeries(parent)
{
    m_categories = categories;
}

void DrilldownBarSeries::mapDrilldownSeries(int index, DrilldownBarSeries *drilldownSeries)
{
    m_DrilldownSeries[index] = drilldownSeries;
}

DrilldownBarSeries *DrilldownBarSeries::drilldownSeries(int index)
{
    return m_DrilldownSeries[index];
}

QStringList DrilldownBarSeries::categories()
{
    return m_categories;
}

#include "moc_drilldownseries.cpp"