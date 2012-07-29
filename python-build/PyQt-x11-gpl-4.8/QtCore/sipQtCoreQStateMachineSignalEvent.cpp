/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 45 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 58 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 43 "sipQtCoreQStateMachineSignalEvent.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 47 "sipQtCoreQStateMachineSignalEvent.cpp"
#line 130 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "sipQtCoreQStateMachineSignalEvent.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 53 "sipQtCoreQStateMachineSignalEvent.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 56 "sipQtCoreQStateMachineSignalEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "sipQtCoreQStateMachineSignalEvent.cpp"


extern "C" {static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QObject *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sender();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->signalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_signalIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QList<QVariant> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QVariant>(sipCpp->arguments());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_arguments, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStateMachine_SignalEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_SignalEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStateMachine_SignalEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QStateMachine::SignalEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_SignalEvent(void *, int);}
static void release_QStateMachine_SignalEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStateMachine::SignalEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStateMachine_SignalEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_SignalEvent[] = {{58, 255, 1}};


static PyMethodDef methods_QStateMachine_SignalEvent[] = {
    {SIP_MLNAME_CAST(sipName_arguments), meth_QStateMachine_SignalEvent_arguments, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QStateMachine_SignalEvent_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_signalIndex), meth_QStateMachine_SignalEvent_signalIndex, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QStateMachine_SignalEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__SignalEvent,
        {0}
    },
    {
        sipNameNr_SignalEvent,
        {181, 255, 0},
        3, methods_QStateMachine_SignalEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStateMachine_SignalEvent,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStateMachine_SignalEvent,
    0,
    0,
    0,
    release_QStateMachine_SignalEvent,
    cast_QStateMachine_SignalEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};